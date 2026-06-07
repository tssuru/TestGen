try:
    
    a,b,c=9,7,9
    def g(a,b=8,c=6):
        print(a,b,c,end="")
    
    g(a=5,0,a=4)
    print(a,b,c)
    
except: print('error')
