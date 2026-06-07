try:
    
    a,b,c=6,7,9
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(a=4,0,a=4)
    print(a,b,c)
    
except: print('error')
