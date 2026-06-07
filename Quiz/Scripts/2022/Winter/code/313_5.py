try:
    
    a,b,c=8,9,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(b=5,c=2,3)
    print(a,b,c)
    
except: print('error')
