try:
    
    a,b,c=9,9,6
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(4,c=1,b=2)
    print(a,b,c)
    
except: print('error')
