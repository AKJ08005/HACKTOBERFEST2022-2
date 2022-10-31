def gradient_descent(X,y,w,b):
    dj_db=0
    a=X.shape[0]
    s=X.shape[1]
    dj_dw = np.zeros((s,))
    for i in range(a):
      err=(np.dot(X[i],w)+b)-y[i]
      for j in range(s):
        dj_dw[j]+=err * X[i, j]
      dj_db+=err
      dj_dw=dj_db/a
      dj_db =dj_db/a
    return dj_dw,dj_db
