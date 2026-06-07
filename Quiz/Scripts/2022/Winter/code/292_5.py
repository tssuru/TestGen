try:
    
    a,b,c=9,7,9
    def f(a,b=8,c=6):
        print(a,b,c,end="")
    
    f(2,4,5)
    print(a,b,c)
    
except: print('error')
