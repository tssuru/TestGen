try:
    
    a,b,c=8,9,6
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(1,c=5,b=2)
    print(a,b,c)
    
except: print('error')
