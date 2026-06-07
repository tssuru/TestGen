try:
    
    a,b,c=9,7,6
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(2,5)
    print(a,b,c)
    
except: print('error')
