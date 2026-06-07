try:
    
    a,b,c=6,9,6
    def h(a,b=7,c=8):
        print(a,b,c,end="")
    
    h(b=2,c=2,3)
    print(a,b,c)
    
except: print('error')
