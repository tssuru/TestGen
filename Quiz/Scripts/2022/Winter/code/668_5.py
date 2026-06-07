try:
    
    a,b,c=8,9,6
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(2,4)
    print(a,b,c)
    
except: print('error')
