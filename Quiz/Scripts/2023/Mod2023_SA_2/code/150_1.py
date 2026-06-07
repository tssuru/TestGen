try:
    a,b,c=7,6,9
    def f(a,b=7,c):
        print(a,b,c,end=" ")
    
    f(b=3,c=0,4)
    print(a,b,c)
    
except: print('error')
