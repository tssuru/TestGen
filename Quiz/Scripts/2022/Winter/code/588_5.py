try:
    
    a,b,c=8,6,9
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(5,c=4,b=2)
    print(a,b,c)
    
except: print('error')
