try:
    
    a,b,c=7,6,9
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(4,c=0,b=5)
    print(a,b,c)
    
except: print('error')
