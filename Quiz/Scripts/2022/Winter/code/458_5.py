try:
    
    a,b,c=8,9,7
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(a=1,5,b=4)
    print(a,b,c)
    
except: print('error')
