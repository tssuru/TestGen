try:
    
    a,b,c=8,6,7
    def h(a,b=9,c=7):
        print(a,b,c,end="")
    
    h(0,c=1)
    print(a,b,c)
    
except: print('error')
