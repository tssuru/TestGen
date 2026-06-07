try:
    a,b,c=7,8,9
    def g(a,b=6,c=6):
        print(a,b,c,end=" ")
    
    g(1,c=3,b=4)
    print(a,b,c)
    
except: print('error')
