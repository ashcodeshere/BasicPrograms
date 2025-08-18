# import cv2 as cv
# import sys
# # 17/08/2025

# # First Program - Read and Writing an Image
# # Reading and Writing Image
# img = cv.imread("APNC1609.jpeg")
# grayscale_img=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
# resized_img=cv.resize(grayscale_img,None, fx=0.5,fy=0.5)
# cv.imshow("Original Image", img)
# cv.imshow("Grayscale Image",grayscale_img)
# cv.imshow("Resized Image",resized_img)
# k = cv.waitKey(0)
# if k == ord("s"):
#     cv.imwrite("APNC1609.jpeg", img)

# # Second Program - Opening camera and reading video(Directly from camera)
# import numpy
# import cv2 as cv
# capture=cv.VideoCapture(0)
# if not capture.isOpened():  # If camera is opened or not
#     print("Camera can't be opened")
#     exit()
# capture.set(cv.CAP_PROP_FRAME_HEIGHT,360)
# capture.set(cv.CAP_PROP_FRAME_WIDTH,180)
# capture.set(cv.CAP_PROP_FPS,60)
# print(f'Height: {capture.get(cv.CAP_PROP_FRAME_HEIGHT)}, Width: {capture.get(cv.CAP_PROP_FRAME_WIDTH)}, FPS: {capture.get(cv.CAP_PROP_FPS)}')
# while True:
#     # Capture frame-by-frame
#    ret,frame=capture.read()
#    # If frame is read correctly ret is True
#    if not ret:
#        print("Can't receive frame(Stream ended?). Existing...")
#        break
#     # Our operations on the frame come here(Coverting to Gray Scale Here)
#     grayscale_vid=cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
#     # Display the frames here.
#     cv.imshow('frame',grayscale_vid)
#     if cv.waitKey(1)==ord('q'):
#         break
# # When everything is done release the capture.
# capture.release()
# cv.destroyAllWindows()

# # Third Program - Open a video and reading it
# import cv2 as cv
# capture=cv.VideoCapture('AKEY9479.MP4')
# capture.set(cv.CAP_PROP_FRAME_HEIGHT,360)
# capture.set(cv.CAP_PROP_FRAME_WIDTH,180)
# capture.set(cv.CAP_PROP_FPS,60)
# while capture.isOpened():
#     ret,frame=capture.read()
#     # If frame is read correctly ret is True
#     if not ret:
#         print("Can't receive frame(Stream ended?). Existing...")
#         break
#     gray=cv.cvtColor(frame,cv.COLOR_BGR2RGB)
#     cv.imshow('frame',gray)
#     if cv.waitKey(1)==ord('q'):
#         break
# capture.release()
# cv.destroyAllWindows()


# Fourth Program
