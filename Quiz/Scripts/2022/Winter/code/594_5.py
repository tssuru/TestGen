try:
    
    a,b,c=9,7,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(a=5,4,b=0)
    print(a,b,c)
    
except: print('error')
