try:
    a,b,c=7,6,8
    def g(a,b,c):
        print(a,b,c,end=" ")
    
    g(1,5,a=4)
    print(a,b,c)
    
except: print('error')
