try:
    a,b,c=6,7,9
    def h(a,b=8,c=6):
        print(a,b,c,end=" ")
    
    h(3,b=0)
    print(a,b,c)
    
except: print('error')
