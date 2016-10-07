import QtQuick 2.7

// ===================================================================

Item {
  default property alias content: content.data

  property var borderColor
  property var borderWidth

  property color bottomColor: 'transparent'
  property color leftColor: 'transparent'
  property color rightColor: 'transparent'
  property color topColor: 'transparent'

  property int bottomWidth: 0
  property int leftWidth: 0
  property int rightWidth: 0
  property int topWidth: 0

  Rectangle {
    id: bottomBorder

    anchors.bottom: parent.bottom
    color: borderColor != null ? borderColor : bottomColor
    height: borderWidth != null ? borderWidth : bottomWidth
    width: parent.width
  }

  Rectangle {
    id: leftBorder

    anchors.left: parent.left
    color: borderColor != null ? borderColor : leftColor
    height: parent.height
    width: borderWidth != null ? borderWidth : leftWidth
  }

  Rectangle {
    id: rightBorder

    anchors.right: parent.right
    color: borderColor != null ? borderColor : rigthColor
    height: parent.height
    width: borderWidth != null ? borderWidth : rightWidth
  }

  Rectangle {
    id: topBorder

    anchors.top: parent.top
    color: borderColor != null ? borderColor : topColor
    height: borderWidth != null ? borderWidth : topWidth
    width: parent.width
  }

  Item {
    id: content

    anchors {
      fill: parent

      bottomMargin: bottomBorder.height
      leftMargin: leftBorder.width
      rightMargin: rightBorder.width
      topMargin: topBorder.height
    }
  }
}
