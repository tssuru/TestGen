try:
    
    a,b,c=7,9,6
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(c=2,a=4,b=3)
    print(a,b,c)
    
except: print('error')
