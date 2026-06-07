try:
    
    a,b,c=8,6,7
    def h(a,b=9,c=8):
        print(a,b,c,end="")
    
    h(a=1,c=2,b=2)
    print(a,b,c)
    
except: print('error')
