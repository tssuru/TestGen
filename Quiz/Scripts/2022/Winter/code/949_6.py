try:
    a,b,c=4,9,6
    def h(a):
        a-=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=1,0,9
    print(h(a),a,b,c)
    
except: print('error')
