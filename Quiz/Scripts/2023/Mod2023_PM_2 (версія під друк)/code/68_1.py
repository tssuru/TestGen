try:
    a,b,c=7,9,6
    def f(a,b,c):
        print(a,b,c,end=" ")
    
    f(0,a=1)
    print(a,b,c)
    
except: print('error')
