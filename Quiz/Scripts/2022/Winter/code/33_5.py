try:
    
    a,b,c=7,6,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(a=2,3,c=0)
    print(a,b,c)
    
except: print('error')
