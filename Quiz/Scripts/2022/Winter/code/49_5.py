try:
    
    a,b,c=7,9,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(1,5,b=3)
    print(a,b,c)
    
except: print('error')
