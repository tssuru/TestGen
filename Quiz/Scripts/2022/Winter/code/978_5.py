try:
    
    a,b,c=7,6,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(b=5,c=3,0)
    print(a,b,c)
    
except: print('error')
