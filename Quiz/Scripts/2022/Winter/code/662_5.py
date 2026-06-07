try:
    
    a,b,c=6,9,7
    def h(a,b=8,c=8):
        print(a,b,c,end="")
    
    h(a=5,4,a=1)
    print(a,b,c)
    
except: print('error')
