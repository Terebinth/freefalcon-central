// =========
// Queue ADT
// =========

// -----------------
// User Descriptions
// -----------------

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � QueueElement CreateQueueElement (void)                              �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Creates and returns a Queue Element.                                �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � void DisposeQueueElement (QueueElement E)                           �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Disposes a Queue Element.                                           �
  �                                                                     �
  � WARNING: Does NOT dispose of any User Data attached to the Element. �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � void SetQueueElementUserData (QueueElement E, void* UserDataPointer)�
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Allows User Defined Data to be attached to a Queue Element.         �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � void* GetQueueElementUserData (QueueElement E)                      �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Allows access to any User Defined Data previously attached to the   �
  � given Queue Element.                                                �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � Queue CreateQueue (void)                                            �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Creates an "empty" Queue.                                           �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � void EnqueueElement (Queue Q, QueueElement E)                       �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Enqueues a Queue Element onto a Queue.                              �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � QueueElement DequeueElement (Queue Q)ement E)                       �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Dequeues and returns a Queue Element from a Queue.                  �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

/*浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�
  � void DisposeQueue (Queue Q)                                         �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Disposes a Queue and all Queue Elements contained within that Queue.�
  �                                                                     �
  � WARNING: Does NOT dispose of any User Data attached to the Elements �
  �          contained in the Queue.                                    �
  把陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳賃陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳�
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  藩様様様様様様様様様様様様様様様様溶様様様様様様様様様様様様様様様様様�*/

// ---------------------------------------
// Type and External Function Declarations
// ---------------------------------------

typedef void* QueueElement;
typedef void* Queue;

extern QueueElement CreateQueueElement(void);

extern void DisposeQueueElement(QueueElement E);

extern void SetQueueElementUserData(QueueElement E, void* UserDataPointer);

extern void* GetQueueElementUserData(QueueElement E);

extern Queue CreateQueue(void);

extern void EnqueueElement(Queue Q, QueueElement E);

extern QueueElement DequeueElement(Queue Q);

extern void DisposeQueue(Queue Q);
