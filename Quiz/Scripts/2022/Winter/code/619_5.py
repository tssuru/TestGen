try:
    
    a,b,c=8,6,9
    def g(a,b=7,c=7):
        print(a,b,c,end="")
    
    g(a=4,5,b=3)
    print(a,b,c)
    
except: print('error')
