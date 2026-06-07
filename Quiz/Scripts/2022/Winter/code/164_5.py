try:
    
    a,b,c=6,6,7
    def h(a,b=9,c=8):
        print(a,b,c,end="")
    
    h(0,c=5,b=2)
    print(a,b,c)
    
except: print('error')
