try:
    a,b,c=7,9,8
    def g(a,b,c=6):
        print(a,b,c,end=" ")
    
    g(a=2,c=3,a=5)
    print(a,b,c)
    
except: print('error')
