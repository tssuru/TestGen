try:
    
    a,b,c=7,6,9
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(3,3)
    print(a,b,c)
    
except: print('error')
