try:
    
    a,b,c=6,9,7
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(1,4,b=0)
    print(a,b,c)
    
except: print('error')
