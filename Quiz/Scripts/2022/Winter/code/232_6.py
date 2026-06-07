try:
    a,b,c=8,2,0
    def h(a):
        global c
        a-=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,4,6
    print(h(a),a,b,c)
    
except: print('error')
