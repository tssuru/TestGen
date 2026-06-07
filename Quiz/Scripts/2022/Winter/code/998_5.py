try:
    
    a,b,c=6,9,7
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(b=5,c=3,1)
    print(a,b,c)
    
except: print('error')
