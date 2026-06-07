try:
    
    a,b,c=7,9,6
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(a=5,4,b=3)
    print(a,b,c)
    
except: print('error')
