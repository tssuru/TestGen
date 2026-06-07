try:
    
    a,b,c=8,6,9
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(b=0,c=2,5)
    print(a,b,c)
    
except: print('error')
