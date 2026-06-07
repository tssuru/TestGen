try:
    
    a,b,c=8,7,8
    def g(a,b=9,c=6):
        print(a,b,c,end="")
    
    g(5,c=1,b=4)
    print(a,b,c)
    
except: print('error')
