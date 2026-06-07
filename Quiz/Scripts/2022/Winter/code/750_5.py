try:
    
    a,b,c=9,6,7
    def h(a,b=8,c=8):
        print(a,b,c,end="")
    
    h(2,1,c=0)
    print(a,b,c)
    
except: print('error')
