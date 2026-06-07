try:
    
    a,b,c=8,9,6
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(0,4,3)
    print(a,b,c)
    
except: print('error')
