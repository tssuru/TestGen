try:
    a,b,c=8,7,9
    def f(a,b=8,c):
        print(a,b,c,end=" ")
    
    f(0,1,a=5)
    print(a,b,c)
    
except: print('error')
