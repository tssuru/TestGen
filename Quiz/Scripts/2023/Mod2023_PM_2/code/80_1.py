try:
    a,b,c=7,6,9
    def f(a,b=8,c):
        print(a,b,c,end=" ")
    
    f(b=1,a=3,c=4)
    print(a,b,c)
    
except: print('error')
