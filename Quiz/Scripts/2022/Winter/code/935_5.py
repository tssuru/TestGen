try:
    
    a,b,c=6,7,9
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(b=2,c=3,0)
    print(a,b,c)
    
except: print('error')
