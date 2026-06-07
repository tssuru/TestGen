try:
    
    a,b,c=8,6,7
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=2,3,c=5)
    print(a,b,c)
    
except: print('error')
