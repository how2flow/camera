import cv2

cam = cv2.VideoCapture(0)

while True:
    check,frame = cam.read()

    cv2.imshow("Live",frame)
    if (cv2.waitKey(1) == 'q'):
        break

cam.release()
cv2.destroyAllWindows()
