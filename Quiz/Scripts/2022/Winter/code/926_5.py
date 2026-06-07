try:
    
    a,b,c=8,6,9
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(3,b=2)
    print(a,b,c)
    
except: print('error')
