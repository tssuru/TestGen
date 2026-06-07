try:
    
    a,b,c=7,9,6
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(3,1)
    print(a,b,c)
    
except: print('error')
