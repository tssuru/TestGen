try:
    
    a,b,c=8,9,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(3,c=2,b=4)
    print(a,b,c)
    
except: print('error')
