try:
    a,b,c=9,6,8
    def f(a,b=7,c):
        print(a,b,c,end=" ")
    
    f(5,4,1)
    print(a,b,c)
    
except: print('error')
