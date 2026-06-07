try:
    
    a,b,c=7,9,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=5,c=0,4)
    print(a,b,c)
    
except: print('error')
