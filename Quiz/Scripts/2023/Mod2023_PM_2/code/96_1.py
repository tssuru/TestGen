try:
    a,b,c=6,8,9
    def g(a,b=8,c):
        print(a,b,c,end=" ")
    
    g(a=4,3,c=2)
    print(a,b,c)
    
except: print('error')
