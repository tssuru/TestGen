try:
    
    a,b,c=7,9,8
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(a=4,2,a=0)
    print(a,b,c)
    
except: print('error')
